/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSSet;

@interface CoreCECTypesInternal : NSObject {

	NSArray* deckControlConstants;
	NSArray* deckControlStrings;
	NSArray* deckInfoConstants;
	NSArray* deckInfoStrings;
	NSArray* deviceTypesConstants;
	NSArray* deviceTypesStrings;
	NSArray* playModeConstants;
	NSArray* playModeStrings;
	NSArray* requestTypeConstants;
	NSArray* requestTypeStrings;
	NSArray* systemAudioModeStatusConstants;
	NSArray* systemAudioModeStatusStrings;
	NSArray* activationStatusConstants;
	NSArray* activationStatusStrings;
	NSSet* _rcProfileClasses;

}

@property (nonatomic,readonly) NSSet * rcProfileClasses;              //@synthesize rcProfileClasses=_rcProfileClasses - In the implementation block
+(id)defaultTypes;
-(id)init;
-(void)dealloc;
-(id)stringForDeviceType:(unsigned long long)arg1 ;
-(NSSet *)rcProfileClasses;
-(id)stringForDeckInfo:(unsigned long long)arg1 ;
-(id)stringForDeckControlMode:(unsigned long long)arg1 ;
-(id)stringForPlayMode:(unsigned long long)arg1 ;
-(id)stringForRequestType:(unsigned long long)arg1 ;
-(id)stringForSystemAudioStatus:(unsigned long long)arg1 ;
-(id)stringForActivationStatus:(unsigned long long)arg1 ;
-(unsigned long long)deckControlModeForString:(id)arg1 ;
-(unsigned long long)deckInfoForString:(id)arg1 ;
-(unsigned long long)playModeForString:(id)arg1 ;
-(unsigned long long)deviceTypeForString:(id)arg1 ;
-(unsigned long long)requestTypeForString:(id)arg1 ;
-(unsigned long long)systemAudioStatusForString:(id)arg1 ;
@end

