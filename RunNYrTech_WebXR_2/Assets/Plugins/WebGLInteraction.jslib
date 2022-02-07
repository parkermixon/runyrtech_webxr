var plugin = {
    Init : function(StartFunc_ptr, EndFunc_ptr, GetGamemodeNames_ptr) {
        StartGameFunction = function(gameModeName_str, difficulty_str, gameLengthSeconds_f) {
            var gameModeName_buf = utils.ToCSString(gameModeName_str);
            var difficulty_buf = utils.ToCSString(difficulty_str);
            dynCall('viif', StartFunc_ptr, [gameModeName_buf, difficulty_buf, gameLengthSeconds_f]);
            _free(gameModeName_buf);
            _free(difficulty_buf);
        };

        EndGameFunction = function() {
            dynCall('v', EndFunc_ptr, []);
        };

        GetGamemodeNames = function() {
            return JSON.parse(Pointer_stringify(dynCall('i', GetGamemodeNames_ptr, [])));
        };
        
        isGameInitialized = true;

        console.log(GetGamemodeNames());
    },

    UpdateGameStats : function() {
        if(ws.readyState === 1) {
            console.log('updating game stats');
        }
    },

    StartGameLib : function() {
        StartGameFunction('SimpleHitMode', 'EASY', 20.0);
    },

    SetCallback : function(callback_ptr) {
        console.log(dynCall);
        dynCall('v', callback_ptr, []);
    },

    DownloadData : function(content, dataType, prefFileName, downloadLinkName) {
        var fileBlob = new Blob([Pointer_stringify(content)], {type : Pointer_stringify(dataType)});
        var url = window.URL.createObjectURL(fileBlob);
        var a = document.createElement('a');
        a.textContent = Pointer_stringify(downloadLinkName);
        a.href = url;
        a.download = Pointer_stringify(prefFileName);

        footer.appendChild(a); //at least append child to allow user to click
        footer.appendChild(document.createElement("br"));
        a.click(); //try to click, may not work
    },

    $utils: {
        ToCSString : function(str_val) {
            var strBufferSize = lengthBytesUTF8(str_val) + 1;
            var strBuffer = _malloc(strBufferSize);
            stringToUTF8(str_val, strBuffer, strBufferSize);
            return strBuffer;
        }
    }
};

autoAddDeps(plugin, '$utils');
mergeInto(LibraryManager.library, plugin);