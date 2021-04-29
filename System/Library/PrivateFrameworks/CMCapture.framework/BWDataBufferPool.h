/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BWDataBufferBackedFormat;
#import <CMCapture/CMCapture-Structs.h>
@class NSString, NSDictionary;

@interface BWDataBufferPool : NSObject {

	id<BWDataBufferBackedFormat> _format;
	unsigned long long _capacity;
	NSString* _name;
	BOOL _clientProvidesPool;
	NSDictionary* _additionalDataBufferAttributes;
	os_unfair_lock_s _dataBufferPoolConfigurationLock;
	CVDataBufferPoolRef _dataBufferPool;
	NSDictionary* _dataBufferPoolAuxAttributes;
	int _dataBufferPoolCreateError;

}

@property (readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long capacity; 
@property (nonatomic,readonly) unsigned dataFormat; 
@property (nonatomic,readonly) CVDataBufferPoolRef cvDataBufferPool; 
@property (nonatomic,readonly) CFDictionaryRef cvDataBufferPoolAuxAttributes; 
+(void)initialize;
-(NSString *)name;
-(void)dealloc;
-(void)flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)capacity;
-(void)flush;
-(void)setCapacity:(unsigned long long)arg1 ;
-(void)_flush;
-(unsigned)dataFormat;
-(int)_ensurePool;
-(void)prefetchWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)enumerateSurfacesUsingBlock:(/*^block*/id)arg1 ;
-(CVBufferRef)_newDataBuffer;
-(id)initWithFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 clientProvidesPool:(BOOL)arg4 ;
-(void)setCVDataBufferPool:(CVDataBufferPoolRef)arg1 attributes:(CFDictionaryRef)arg2 ;
-(CVBufferRef)newDataBuffer;
-(CVDataBufferPoolRef)cvDataBufferPool;
-(CFDictionaryRef)cvDataBufferPoolAuxAttributes;
@end

