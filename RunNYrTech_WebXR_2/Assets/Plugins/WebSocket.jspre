var isGameInitialized = false;

//setup container to hold all stuff added by these libraries
//this container has to use absolute positioning and size because the webgl template does too
const footer = document.createElement("div");
footer.style.position = "absolute"; 
footer.style.bottom = "0px";
document.body.appendChild(footer);

const adj_size_observer = new MutationObserver((mutationsList) => {
    console.log("change")
    let target = mutationsList[0].target;
    console.log(target);
    target.style.height = target.offsetHeight + "px";
});

adj_size_observer.observe(footer, { attributes: true, childList: true });

createGameSelect(); //temp

const ws = new WebSocket('ws://192.168.1.243/game');

ws.onload = initWS;

ws.onmessage = function(webSocketMessage) {
    console.log('received message');
    const messageBody = JSON.parse(webSocketMessage.data);
    if (messageBody.func == 'get_gamemodes') {
    } else if (messageBody.func == 'msg') {
        console.log(messageBody.data);
    }
};

ws.onerror = function(event) {
    console.log(event); //deal with this better
};

function initWS() {
    if (isGameInitialized) {
        ws.send({
            func : 'init',
            data : {gamemodes : GetGamemodeNames()} //replace with list of gamemode names and stuff
        }.toString());
    } else {
        setTimeout(initWS, 100);
    }
}

function createGameSelect() { //temp
    if (isGameInitialized) {
        let select = document.createElement("select");
        footer.appendChild(select);

        for (var gameMode of GetGamemodeNames()) {
            let option = document.createElement("option");
            option.value = gameMode;
            option.innerText = gameMode;
            select.appendChild(option);
        }

        footer.appendChild(document.createElement("br"));

        let start_button = document.createElement("button");
        footer.appendChild(start_button);
        start_button.innerText = "Start GameMode";
        start_button.onclick = function() {
            StartGameFunction(select.value, "EASY", 20);
        }

        let end_button = document.createElement("button");
        footer.appendChild(end_button);
        end_button.innerText = "End Game";
        end_button.onclick = function () {
            EndGameFunction();
        }

        footer.appendChild(document.createElement("br"));
    } else {
        setTimeout(createGameSelect, 100);
    }
}

var StartGameFunction = null;
var EndGameFunction = null;
var GetGamemodeNames = null;