import QtQuick 2.3
import QtQuick.Window 2.2
import QtQuick.Controls 1.2

Window {
    visible: true
    width: 360
    height: 360

    MouseArea {
        anchors.fill: parent
        onClicked: {
            Qt.quit();
        }
    }

    TextField {
        id: textField1
        x: 31
        y: 169
        placeholderText: qsTr("Enter some text...")
    }

    Button {
        x: 193
        y: 167
        text: qsTr("Uppercase me!")
        onClicked:
            textField1.text = _uppercase.uppercase(textField1.text)
    }
}
