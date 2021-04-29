/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/DNDSModeAssertionStoreRecordDictionaryEncoding.h>

@class NSArray, NSString;

@interface DNDSModeAssertionStoreRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding> {

	NSArray* _assertions;
	NSArray* _invalidations;
	NSArray* _invalidationRequests;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * assertions;                        //@synthesize assertions=_assertions - In the implementation block
@property (nonatomic,retain) NSArray * invalidations;                     //@synthesize invalidations=_invalidations - In the implementation block
@property (nonatomic,retain) NSArray * invalidationRequests;              //@synthesize invalidationRequests=_invalidationRequests - In the implementation block
+(id)recordForDictionary:(id)arg1 keys:(const SCD_Struct_DN9*)arg2 ;
+(id)recordForAssertionStore:(id)arg1 ;
-(id)object;
-(NSArray *)assertions;
-(void)setAssertions:(NSArray *)arg1 ;
-(NSArray *)invalidations;
-(id)dictionaryWithKeys:(const SCD_Struct_DN9*)arg1 options:(unsigned long long)arg2 ;
-(NSArray *)invalidationRequests;
-(void)setInvalidationRequests:(NSArray *)arg1 ;
-(void)setInvalidations:(NSArray *)arg1 ;
@end

