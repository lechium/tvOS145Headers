/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIColor;

@interface PXLivePhotoTrimScrubberSnapStripControllerSpec : NSObject {

	BOOL _alwaysShowKeyTime;
	BOOL _showDefaultKeyTime;
	UIColor* _disabledColor;
	UIColor* _currentPositionMarkerColor;
	UIColor* _originalPositionMarkerColor;
	UIColor* _suggestedMarkerColor;

}

@property (nonatomic,retain) UIColor * disabledColor;                            //@synthesize disabledColor=_disabledColor - In the implementation block
@property (nonatomic,retain) UIColor * currentPositionMarkerColor;               //@synthesize currentPositionMarkerColor=_currentPositionMarkerColor - In the implementation block
@property (nonatomic,retain) UIColor * originalPositionMarkerColor;              //@synthesize originalPositionMarkerColor=_originalPositionMarkerColor - In the implementation block
@property (nonatomic,retain) UIColor * suggestedMarkerColor;                     //@synthesize suggestedMarkerColor=_suggestedMarkerColor - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowKeyTime;                             //@synthesize alwaysShowKeyTime=_alwaysShowKeyTime - In the implementation block
@property (assign,nonatomic) BOOL showDefaultKeyTime;                            //@synthesize showDefaultKeyTime=_showDefaultKeyTime - In the implementation block
-(id)init;
-(UIColor *)disabledColor;
-(void)setDisabledColor:(UIColor *)arg1 ;
-(UIColor *)currentPositionMarkerColor;
-(void)setCurrentPositionMarkerColor:(UIColor *)arg1 ;
-(UIColor *)originalPositionMarkerColor;
-(void)setOriginalPositionMarkerColor:(UIColor *)arg1 ;
-(UIColor *)suggestedMarkerColor;
-(void)setSuggestedMarkerColor:(UIColor *)arg1 ;
-(BOOL)alwaysShowKeyTime;
-(void)setAlwaysShowKeyTime:(BOOL)arg1 ;
-(BOOL)showDefaultKeyTime;
-(void)setShowDefaultKeyTime:(BOOL)arg1 ;
@end
