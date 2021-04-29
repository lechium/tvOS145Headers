/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <PhotoFoundation/PFLoggerBackendAdapter.h>

@class NSArray;

@interface PFLoggerBackendComposite : PFLoggerBackendAdapter {

	BOOL _allBackendsAllowConcurrentAccess;
	NSArray* _backends;

}

@property (retain) NSArray * backends;                                 //@synthesize backends=_backends - In the implementation block
@property (assign) BOOL allBackendsAllowConcurrentAccess;              //@synthesize allBackendsAllowConcurrentAccess=_allBackendsAllowConcurrentAccess - In the implementation block
-(void)flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSArray *)backends;
-(void)setBackends:(NSArray *)arg1 ;
-(id)initWithBackends:(id)arg1 ;
-(BOOL)allowsConcurrentAccess;
-(void)logFromCodeLocation:(SCD_Struct_PF5*)arg1 facility:(id)arg2 subsystem:(id)arg3 level:(int)arg4 message:(id)arg5 format:(id)arg6 args:(char*)arg7 ;
-(BOOL)allBackendsAllowConcurrentAccess;
-(void)setAllBackendsAllowConcurrentAccess:(BOOL)arg1 ;
@end
