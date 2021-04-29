/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class HMBModel, NSData;

@interface HMBLocalSQLContextRecord : HMFObject {

	HMBModel* _model;
	NSData* _externalID;

}

@property (nonatomic,readonly) HMBModel * model;                 //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) NSData * externalID;              //@synthesize externalID=_externalID - In the implementation block
-(HMBModel *)model;
-(NSData *)externalID;
-(id)attributeDescriptions;
-(id)initWithModel:(id)arg1 externalID:(id)arg2 ;
@end
