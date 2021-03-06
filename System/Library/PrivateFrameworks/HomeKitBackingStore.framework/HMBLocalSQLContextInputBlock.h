/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString, HMFActivity, HMBLocalSQLContext;

@interface HMBLocalSQLContextInputBlock : HMFObject <HMFLogging> {

	NSString* _identifier;
	unsigned long long _blockRow;
	HMFActivity* _activity;
	HMBLocalSQLContext* _owner;
	unsigned long long _zoneRow;
	unsigned long long _type;

}

@property (assign,nonatomic,__weak) HMBLocalSQLContext * owner;              //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic) unsigned long long blockRow;                    //@synthesize blockRow=_blockRow - In the implementation block
@property (nonatomic,readonly) unsigned long long zoneRow;                   //@synthesize zoneRow=_zoneRow - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) HMFActivity * activity;                       //@synthesize activity=_activity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(unsigned long long)type;
-(NSString *)identifier;
-(void)setOwner:(HMBLocalSQLContext *)arg1 ;
-(HMFActivity *)activity;
-(HMBLocalSQLContext *)owner;
-(id)abort;
-(id)commit:(id)arg1 ;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(unsigned long long)blockRow;
-(id)updateExternalID:(id)arg1 externalData:(id)arg2 modelEncoding:(unsigned long long)arg3 modelData:(id)arg4 ;
-(unsigned long long)zoneRow;
-(void)setBlockRow:(unsigned long long)arg1 ;
-(id)initWithOwner:(id)arg1 identifier:(id)arg2 zoneRow:(unsigned long long)arg3 blockRow:(unsigned long long)arg4 type:(unsigned long long)arg5 ;
-(id)insertExternalID:(id)arg1 externalData:(id)arg2 modelEncoding:(unsigned long long)arg3 modelData:(id)arg4 ;
@end

