for(int i = 0; i < colors.length-1; i++) {
    if(colors[0] != colors[colors.length-1-i] || colors[colors.length-1] != colors[i]) {
        return colors.length-i-1;
    }
}