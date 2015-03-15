#version 450 core

layout(location = 0) out vec4 out_color;

in vec4 color;

void main(){
 
 	out_color = color;
}