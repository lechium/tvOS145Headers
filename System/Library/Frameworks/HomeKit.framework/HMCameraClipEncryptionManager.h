/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData;

@interface HMCameraClipEncryptionManager : NSObject {

	NSData* _key;

}

@property (copy,readonly) NSData * key;              //@synthesize key=_key - In the implementation block
-(id)init;
-(NSData *)key;
-(id)initWithKey:(id)arg1 ;
-(id)encryptedDataContextFromData:(id)arg1 ;
@end
