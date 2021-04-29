/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_xpc_object;
@class NSData, NSObject;

@interface CSDataWrapper : NSObject {

	BOOL _mapped;
	NSData* _data;
	unsigned long long _dataSize;
	NSObject*<OS_xpc_object> _xpcData;
	const void* _dataPtr;
	unsigned long long _mapSize;

}

@property (nonatomic,readonly) NSData * data;                                 //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> xpcData;              //@synthesize xpcData=_xpcData - In the implementation block
@property (nonatomic,readonly) const void* dataPtr;                           //@synthesize dataPtr=_dataPtr - In the implementation block
@property (assign,nonatomic) unsigned long long dataSize;                     //@synthesize dataSize=_dataSize - In the implementation block
@property (nonatomic,readonly) unsigned long long mapSize;                    //@synthesize mapSize=_mapSize - In the implementation block
@property (nonatomic,readonly) BOOL mapped;                                   //@synthesize mapped=_mapped - In the implementation block
-(void)dealloc;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(void)setDataSize:(unsigned long long)arg1 ;
-(unsigned long long)dataSize;
-(const void*)dataPtr;
-(id)initWithXPCValue:(id)arg1 allowWritableSharedMemory:(BOOL)arg2 ;
-(id)initWithXPCValue:(id)arg1 ;
-(NSObject*<OS_xpc_object>)xpcData;
-(unsigned long long)mapSize;
-(BOOL)mapped;
@end

