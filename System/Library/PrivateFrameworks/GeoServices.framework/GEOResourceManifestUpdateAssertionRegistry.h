/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOPListStateCapturing.h>

@class geo_isolater, NSMutableArray, NSString;

@interface GEOResourceManifestUpdateAssertionRegistry : NSObject <GEOPListStateCapturing> {

	geo_isolater* _isolation;
	NSMutableArray* _assertions;
	unsigned long long _stateCaptureHandle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedRegistry;
-(id)init;
-(void)dealloc;
-(id)captureStatePlistWithHints:(os_state_hints_s*)arg1 ;
-(BOOL)hasActiveAssertions;
-(id)activeAssertionsDescription;
-(id)addAssertionForProcess:(id)arg1 reason:(id)arg2 creationTimestamp:(double)arg3 ;
-(id)addInternalAssertionForReason:(id)arg1 ;
-(void)removeAssertion:(id)arg1 ;
@end

