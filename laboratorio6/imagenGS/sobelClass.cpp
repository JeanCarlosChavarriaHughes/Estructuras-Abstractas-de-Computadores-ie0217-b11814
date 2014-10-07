#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

public class Sobel_extends_MarvinAbstractImagePlugin{

    // Definitions

    double[][] matrixSobelX = new double[][]{
            {1,     0,  -1},
            {2,     0,  -2},
            {1,     0,  -1}
    };
    double[][] matrixSobelY = new double[][]{
            {-1,    -2,     -1},
            {0,     0,      0},
            {1,     2,      1}
    };

    private MarvinImagePlugin   convolution;

    public void load(){
        convolution = MarvinPluginLoader.loadImagePlugin("org.marvinproject.image.convolution.jar");
    }

    public MarvinAttributesPanel getAttributesPanel(){
        return null;
    }
    public void process
    (
        MarvinImage imageIn, 
        MarvinImage imageOut,
        MarvinAttributes attrOut,
        MarvinImageMask mask, 
        boolean previewMode
    )
    {
        convolution.setAttribute("matrix", matrixSobelX);
        convolution.process(imageIn, imageOut, null, mask, previewMode);
        convolution.setAttribute("matrix", matrixSobelY);
        convolution.process(imageIn, imageOut, null, mask, previewMode);
    }
}}
