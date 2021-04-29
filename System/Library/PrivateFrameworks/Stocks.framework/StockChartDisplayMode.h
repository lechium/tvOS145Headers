/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Stocks/Stocks-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor;

@interface StockChartDisplayMode : NSObject <NSCopying> {

	NSString* _hash;
	BOOL _showsVolume;
	BOOL _HUDEnabled;
	BOOL _showsPriceLabelForPreviousClose;
	BOOL _usesDetailedAxisLabels;
	BOOL _graphOverlapsYAxisLabels;
	long long _maxInterval;
	double _showsTitle;
	unsigned long long _yAxisLabelCount;
	unsigned long long _horizontalGridlineCount;
	double _volumeHeight;
	double _intervalRowHeight;
	double _lineWidth;
	UIColor* _lineColor;
	UIColor* _backgroundLinesColor;
	UIColor* _xAxisKeylineColor;
	UIColor* _axisLabelsColor;
	CGGradientRef _backgroundGradient;
	CGSize _chartSize;
	UIEdgeInsets _lineGraphInsets;
	UIEdgeInsets _chartRenderingInsets;

}

@property (assign,nonatomic) CGSize chartSize;                                        //@synthesize chartSize=_chartSize - In the implementation block
@property (assign,nonatomic) BOOL showsVolume;                                        //@synthesize showsVolume=_showsVolume - In the implementation block
@property (assign,nonatomic) long long maxInterval;                                   //@synthesize maxInterval=_maxInterval - In the implementation block
@property (assign,nonatomic) BOOL HUDEnabled;                                         //@synthesize HUDEnabled=_HUDEnabled - In the implementation block
@property (assign,nonatomic) double showsTitle;                                       //@synthesize showsTitle=_showsTitle - In the implementation block
@property (assign,nonatomic) unsigned long long yAxisLabelCount;                      //@synthesize yAxisLabelCount=_yAxisLabelCount - In the implementation block
@property (assign,nonatomic) unsigned long long horizontalGridlineCount;              //@synthesize horizontalGridlineCount=_horizontalGridlineCount - In the implementation block
@property (assign,nonatomic) BOOL showsPriceLabelForPreviousClose;                    //@synthesize showsPriceLabelForPreviousClose=_showsPriceLabelForPreviousClose - In the implementation block
@property (assign,nonatomic) BOOL usesDetailedAxisLabels;                             //@synthesize usesDetailedAxisLabels=_usesDetailedAxisLabels - In the implementation block
@property (assign,nonatomic) UIEdgeInsets lineGraphInsets;                            //@synthesize lineGraphInsets=_lineGraphInsets - In the implementation block
@property (assign,nonatomic) BOOL graphOverlapsYAxisLabels;                           //@synthesize graphOverlapsYAxisLabels=_graphOverlapsYAxisLabels - In the implementation block
@property (assign,nonatomic) double volumeHeight;                                     //@synthesize volumeHeight=_volumeHeight - In the implementation block
@property (assign,nonatomic) double intervalRowHeight;                                //@synthesize intervalRowHeight=_intervalRowHeight - In the implementation block
@property (nonatomic,readonly) double gutterHeight; 
@property (nonatomic,readonly) double lineGraphBottomPadding; 
@property (assign,nonatomic) double lineWidth;                                        //@synthesize lineWidth=_lineWidth - In the implementation block
@property (nonatomic,retain) UIColor * lineColor;                                     //@synthesize lineColor=_lineColor - In the implementation block
@property (nonatomic,retain) UIColor * backgroundLinesColor;                          //@synthesize backgroundLinesColor=_backgroundLinesColor - In the implementation block
@property (nonatomic,retain) UIColor * xAxisKeylineColor;                             //@synthesize xAxisKeylineColor=_xAxisKeylineColor - In the implementation block
@property (nonatomic,retain) UIColor * axisLabelsColor;                               //@synthesize axisLabelsColor=_axisLabelsColor - In the implementation block
@property (assign,nonatomic) CGGradientRef backgroundGradient;                        //@synthesize backgroundGradient=_backgroundGradient - In the implementation block
@property (assign,nonatomic) UIEdgeInsets chartRenderingInsets;                       //@synthesize chartRenderingInsets=_chartRenderingInsets - In the implementation block
+(id)defaultDisplayMode;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(UIColor *)lineColor;
-(void)setLineColor:(UIColor *)arg1 ;
-(void)setMaxInterval:(long long)arg1 ;
-(void)setGraphOverlapsYAxisLabels:(BOOL)arg1 ;
-(void)setXAxisKeylineColor:(UIColor *)arg1 ;
-(void)setAxisLabelsColor:(UIColor *)arg1 ;
-(void)setYAxisLabelCount:(unsigned long long)arg1 ;
-(void)setChartSize:(CGSize)arg1 ;
-(void)setHorizontalGridlineCount:(unsigned long long)arg1 ;
-(void)setVolumeHeight:(double)arg1 ;
-(void)setShowsPriceLabelForPreviousClose:(BOOL)arg1 ;
-(unsigned long long)yAxisLabelCount;
-(void)setUsesDetailedAxisLabels:(BOOL)arg1 ;
-(void)setShowsTitle:(double)arg1 ;
-(void)setHUDEnabled:(BOOL)arg1 ;
-(double)volumeHeight;
-(BOOL)HUDEnabled;
-(BOOL)showsVolume;
-(double)gutterHeight;
-(CGGradientRef)backgroundGradient;
-(UIColor *)backgroundLinesColor;
-(void)setBackgroundLinesColor:(UIColor *)arg1 ;
-(void)setIntervalRowHeight:(double)arg1 ;
-(void)setShowsVolume:(BOOL)arg1 ;
-(void)setChartRenderingInsets:(UIEdgeInsets)arg1 ;
-(CGSize)chartSize;
-(long long)maxInterval;
-(double)showsTitle;
-(unsigned long long)horizontalGridlineCount;
-(BOOL)showsPriceLabelForPreviousClose;
-(BOOL)usesDetailedAxisLabels;
-(UIEdgeInsets)lineGraphInsets;
-(void)setLineGraphInsets:(UIEdgeInsets)arg1 ;
-(BOOL)graphOverlapsYAxisLabels;
-(double)intervalRowHeight;
-(UIColor *)xAxisKeylineColor;
-(UIColor *)axisLabelsColor;
-(void)setBackgroundGradient:(CGGradientRef)arg1 ;
-(double)lineGraphBottomPadding;
-(UIEdgeInsets)chartRenderingInsets;
@end
