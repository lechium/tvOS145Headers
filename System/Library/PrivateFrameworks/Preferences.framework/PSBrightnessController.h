/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PSBrightnessController : NSObject {

	/*^block*/id _isTracking;
	/*^block*/id _brightnessChangedExternally;

}

@property (nonatomic,copy) id isTracking;                               //@synthesize isTracking=_isTracking - In the implementation block
@property (nonatomic,copy) id brightnessChangedExternally;              //@synthesize brightnessChangedExternally=_brightnessChangedExternally - In the implementation block
+(id)sharedController;
-(id)isTracking;
-(void)setIsTracking:(id)arg1 ;
-(id)brightnessChangedExternally;
-(void)setBrightnessChangedExternally:(id)arg1 ;
@end

