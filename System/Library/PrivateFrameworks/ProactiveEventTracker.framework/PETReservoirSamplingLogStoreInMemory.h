/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
#import <libobjc.A.dylib/PETReservoirSamplingLogStore.h>

@class NSMutableData, NSString;

@interface PETReservoirSamplingLogStoreInMemory : NSObject <PETReservoirSamplingLogStore> {

	NSMutableData* _data;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)lock;
-(void)unlock;
-(unsigned long long)currentLength;
-(SCD_Struct_PE8*)remap:(unsigned long long*)arg1 ;
-(SCD_Struct_PE8*)headerMap:(unsigned long long*)arg1 ;
-(BOOL)changeLength:(unsigned long long)arg1 ;
-(BOOL)appendData:(id)arg1 andReturnMapPointer:(/*function pointer*/void**)arg2 ;
-(BOOL)attemptToRecreate;
@end

