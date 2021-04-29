/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUIDynamic.framework/AppleMediaServicesUIDynamic
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSBundle;

@interface AMSUIDCellularDataInquiry : NSObject {

	NSBundle* _bundle;

}

@property (nonatomic,readonly) NSBundle * bundle;                    //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,readonly) BOOL isSupported; 
@property (nonatomic,readonly) BOOL isEnabledForDevice; 
@property (nonatomic,readonly) BOOL isEnabledForBundle; 
+(id)settingsURL;
-(id)init;
-(id)initWithBundle:(id)arg1 ;
-(NSBundle *)bundle;
-(BOOL)isSupported;
-(BOOL)isEnabledForDevice;
-(BOOL)isEnabledForBundle;
@end

