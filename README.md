# Comunication between ESP modules and serial payload capture

This is a pair of files that comunicates a ESP as a Acces Point to a Wireless Network and same time admits connection since other ESP as a Station (or Client).

Note: Until now the serial payload capture keep sending repeatedly the buffer content and there's no way to flush it even if use serialEvent. The problem comes from UDP library.
