/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomeStreams/BMEventBase.h>
#import <libobjc.A.dylib/BMStoreData.h>
#import <libobjc.A.dylib/BMProtoBufWrapper.h>

@class NSString;

@interface BMSleepModeEvent : BMEventBase <BMStoreData, BMProtoBufWrapper> {

	unsigned long long _sleepModeState;

}

@property (nonatomic,readonly) unsigned long long sleepModeState;              //@synthesize sleepModeState=_sleepModeState - In the implementation block
@property (nonatomic,readonly) unsigned dataVersion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)eventWithData:(id)arg1 dataVersion:(unsigned)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(unsigned)dataVersion;
-(id)jsonDict;
-(id)serialize;
-(unsigned long long)sleepModeState;
-(id)json;
-(id)proto;
-(id)initWithProto:(id)arg1 ;
-(id)encodeAsProto;
-(id)initWithProtoData:(id)arg1 ;
-(id)initWithSleepModeState:(unsigned long long)arg1 ;
@end

