/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCapture/AVFCapture-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class AVCaptureSynchronizedDataCollectionInternal;

@interface AVCaptureSynchronizedDataCollection : NSObject <NSFastEnumeration> {

	AVCaptureSynchronizedDataCollectionInternal* _internal;

}

@property (readonly) unsigned long long count; 
+(void)initialize;
-(id)description;
-(id)debugDescription;
-(void)dealloc;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_AV28*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)_shortStringForDataOutput:(id)arg1 syncedData:(id)arg2 ;
-(id)_shortStringForDataDroppedReason:(long long)arg1 ;
-(id)synchronizedDataForCaptureOutput:(id)arg1 ;
-(id)_initWithPossibleDataOutputs:(id)arg1 ;
-(void)_setSynchronizedData:(id)arg1 forCaptureOutput:(id)arg2 ;
@end

