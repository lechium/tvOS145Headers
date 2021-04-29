/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherUI.framework/WeatherUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WeatherUI/WeatherUI-Structs.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class CALayer, City, NSMutableArray, CAStateController, NSString;

@interface WUIWeatherCondition : NSObject <CALayerDelegate> {

	CALayer* _rootLayer;
	BOOL _playing;
	BOOL _hidden;
	BOOL _shouldRasterize;
	BOOL _multiCityMode;
	BOOL _isRotating;
	BOOL _forcesCondition;
	City* _city;
	double _alpha;
	double _speed;
	double _timeOffset;
	CALayer* _layer;
	long long _condition;
	unsigned long long _CAMLState;
	NSMutableArray* _gyroLayers;
	CAStateController* _stateController;
	NSString* _loadedFileName;
	long long _forcesNight;

}

@property (nonatomic,retain) NSMutableArray * gyroLayers;                      //@synthesize gyroLayers=_gyroLayers - In the implementation block
@property (nonatomic,retain) CAStateController * stateController;              //@synthesize stateController=_stateController - In the implementation block
@property (nonatomic,retain) NSString * loadedFileName;                        //@synthesize loadedFileName=_loadedFileName - In the implementation block
@property (assign,nonatomic) BOOL forcesCondition;                             //@synthesize forcesCondition=_forcesCondition - In the implementation block
@property (assign,nonatomic) long long forcesNight;                            //@synthesize forcesNight=_forcesNight - In the implementation block
@property (assign,nonatomic,__weak) City * city;                               //@synthesize city=_city - In the implementation block
@property (assign,nonatomic) BOOL playing;                                     //@synthesize playing=_playing - In the implementation block
@property (assign,nonatomic) double alpha;                                     //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) double speed;                                     //@synthesize speed=_speed - In the implementation block
@property (assign,nonatomic) double timeOffset;                                //@synthesize timeOffset=_timeOffset - In the implementation block
@property (assign,nonatomic) BOOL hidden;                                      //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,readonly) CALayer * layer;                                //@synthesize layer=_layer - In the implementation block
@property (assign,nonatomic) BOOL shouldRasterize;                             //@synthesize shouldRasterize=_shouldRasterize - In the implementation block
@property (assign,nonatomic) BOOL multiCityMode;                               //@synthesize multiCityMode=_multiCityMode - In the implementation block
@property (assign,nonatomic) long long condition;                              //@synthesize condition=_condition - In the implementation block
@property (assign,nonatomic) BOOL isRotating;                                  //@synthesize isRotating=_isRotating - In the implementation block
@property (assign,nonatomic) unsigned long long CAMLState;                     //@synthesize CAMLState=_CAMLState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)resume;
-(void)pause;
-(long long)condition;
-(double)alpha;
-(void)setSpeed:(double)arg1 ;
-(double)speed;
-(void)setTime:(float)arg1 ;
-(CALayer *)layer;
-(double)timeOffset;
-(void)setTimeOffset:(double)arg1 ;
-(BOOL)hidden;
-(BOOL)shouldRasterize;
-(void)setHidden:(BOOL)arg1 ;
-(void)setShouldRasterize:(BOOL)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setAlpha:(double)arg1 ;
-(void)setCondition:(long long)arg1 ;
-(void)setCity:(City *)arg1 ;
-(City *)city;
-(BOOL)playing;
-(BOOL)isRotating;
-(void)setPlaying:(BOOL)arg1 ;
-(CAStateController *)stateController;
-(void)setIsRotating:(BOOL)arg1 ;
-(BOOL)_interfaceConsideredPortraitForCAMLLayerWithSize:(CGSize)arg1 ;
-(void)setCAMLLayerStateForInterfaceOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setCity:(id)arg1 animationDuration:(double)arg2 ;
-(void)setCondition:(long long)arg1 animationDuration:(double)arg2 ;
-(NSString *)loadedFileName;
-(void)setCorrectStateForCurrentOrientationAndMode;
-(void)setAlpha:(double)arg1 animationDuration:(double)arg2 ;
-(void)setCAMLState:(unsigned long long)arg1 ;
-(BOOL)_interfaceConsideredPortraitForCAMLLayer;
-(unsigned long long)CAMLState;
-(void)transitionToSize:(CGSize)arg1 animated:(BOOL)arg2 ;
-(void)setMultiCityMode:(BOOL)arg1 ;
-(BOOL)multiCityMode;
-(NSMutableArray *)gyroLayers;
-(void)setGyroLayers:(NSMutableArray *)arg1 ;
-(void)setStateController:(CAStateController *)arg1 ;
-(void)setLoadedFileName:(NSString *)arg1 ;
-(BOOL)forcesCondition;
-(void)setForcesCondition:(BOOL)arg1 ;
-(long long)forcesNight;
-(void)setForcesNight:(long long)arg1 ;
@end

