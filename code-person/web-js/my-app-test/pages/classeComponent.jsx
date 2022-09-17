import React, { Component } from "react";

export default class Saudacao extends Component{
    state = {
        texto: "escreva algo aqui"
    }
    
    render()
    {
        return (
        <React.Fragment>
            <h1>Isso aqui esta funcional</h1>
            <hr />
            <input type="text" />

        </React.Fragment>
        )
    }
}