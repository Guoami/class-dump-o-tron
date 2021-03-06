//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CIFilter;

@interface BLAdjustmentModel : NSObject
{
    double _whiteLevel;
    double _blackLevel;
    double _brightness;
    double _contrast;
    double _autoShadowsMaxLevel;
    double _autoBlackLevelAtShadowsMaxLevel;
    long long _highlightShadowAdjustVersion;
    _Bool _hasPentaCurve;
    _Bool _reprocessPentaCurve;
    struct {
        long long type;
        double x;
        double y;
        double ri;
        double gq;
        double b;
    } _whiteBalance;
    _Bool _hasWhiteBalance;
    _Bool _reprocessWhiteBalance;
    double _saturation;
    _Bool _useVibrancy;
    _Bool _hasSaturation;
    _Bool _reprocessSaturation;
    double _faceBalanceWarmth;
    _Bool _hasFaceBalance;
    _Bool _reprocessFaceBalance;
    double _saturationSky;
    double _saturationGrass;
    _Bool _hasSkyAndGrass;
    _Bool _reprocessSkyAndGrass;
    double _underwaterBalanceDepthStrength;
    double _underwaterBalanceWaterBlend;
    _Bool _hasUnderwaterBalance;
    _Bool _reprocessUnderwaterBalance;
    _Bool _hasColor;
    _Bool _hasExposure;
    _Bool _isChainBuilt;
    double _histogramBlackPoint;
    double _histogramWhitePoint;
    double _histogramAverageLinearRed;
    double _histogramAverageLinearGreen;
    double _histogramAverageLinearBlue;
    CIFilter *_curvesFilter;
    CIFilter *_colorFilter;
    CIFilter *_vibranceFilter;
    CIFilter *_faceBalanceFilter;
    CIFilter *_skyAndGrassFilter;
    CIFilter *_underwaterBalanceFilter;
    CIFilter *_highlightsAndShadowsFilter;
    CIFilter *_tempAndTintFilter;
    CIFilter *_colorBalanceFilter;
}

+ (id)rampImage;
+ (id)exposureValuesForToneCurveData:(id)arg1 highlightsAndShadowsData:(id)arg2 andHistogramData:(id)arg3;
+ (struct CGPoint)pointOnCurveFromPoint:(struct CGPoint)arg1 withSlope:(double)arg2 andCurveData:(double *)arg3;
@property(retain, nonatomic) CIFilter *colorBalanceFilter; // @synthesize colorBalanceFilter=_colorBalanceFilter;
@property(retain, nonatomic) CIFilter *tempAndTintFilter; // @synthesize tempAndTintFilter=_tempAndTintFilter;
@property(retain, nonatomic) CIFilter *highlightsAndShadowsFilter; // @synthesize highlightsAndShadowsFilter=_highlightsAndShadowsFilter;
@property(retain, nonatomic) CIFilter *underwaterBalanceFilter; // @synthesize underwaterBalanceFilter=_underwaterBalanceFilter;
@property(retain, nonatomic) CIFilter *skyAndGrassFilter; // @synthesize skyAndGrassFilter=_skyAndGrassFilter;
@property(retain, nonatomic) CIFilter *faceBalanceFilter; // @synthesize faceBalanceFilter=_faceBalanceFilter;
@property(retain, nonatomic) CIFilter *vibranceFilter; // @synthesize vibranceFilter=_vibranceFilter;
@property(retain, nonatomic) CIFilter *colorFilter; // @synthesize colorFilter=_colorFilter;
@property(retain, nonatomic) CIFilter *curvesFilter; // @synthesize curvesFilter=_curvesFilter;
- (id)adjustedImageFromImage:(id)arg1;
- (void)releaseChain;
- (void)buildChain;
- (_Bool)hasExposure;
- (_Bool)hasColor;
- (_Bool)hasAdjustments;
- (void)reset;
- (void)dealloc;
- (void)updateAdjustmentsDictionary:(id)arg1 andAnalysisDictionary:(id)arg2;
- (id)init;
- (id)initWithAdjustmentsDictionary:(id)arg1 andAnalysisDictionary:(id)arg2;

@end

