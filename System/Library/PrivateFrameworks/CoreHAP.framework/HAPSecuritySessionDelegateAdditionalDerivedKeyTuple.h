/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSData;

@interface HAPSecuritySessionDelegateAdditionalDerivedKeyTuple : NSObject {

	NSString* _name;
	NSData* _saltData;
	NSData* _infoData;

}

@property (nonatomic,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSData * saltData;              //@synthesize saltData=_saltData - In the implementation block
@property (nonatomic,readonly) NSData * infoData;              //@synthesize infoData=_infoData - In the implementation block
+(id)new;
-(NSString *)name;
-(id)init;
-(NSData *)saltData;
-(NSData *)infoData;
-(id)initWithName:(id)arg1 saltData:(id)arg2 infoData:(id)arg3 ;
@end

