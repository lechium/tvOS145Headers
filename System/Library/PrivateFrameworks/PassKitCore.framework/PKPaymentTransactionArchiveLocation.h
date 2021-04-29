/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PKCloudStoreZone;

@interface PKPaymentTransactionArchiveLocation : NSObject <NSSecureCoding, NSCopying> {

	BOOL _archived;
	unsigned long long _type;
	PKCloudStoreZone* _cloudStoreZone;

}

@property (assign,getter=isArchived,nonatomic) BOOL archived;                //@synthesize archived=_archived - In the implementation block
@property (assign,nonatomic) unsigned long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) PKCloudStoreZone * cloudStoreZone;              //@synthesize cloudStoreZone=_cloudStoreZone - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)type;
-(BOOL)isArchived;
-(BOOL)isEqualToArchiveLocation:(id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 archived:(BOOL)arg2 cloudStoreZone:(id)arg3 ;
-(void)setArchived:(BOOL)arg1 ;
-(PKCloudStoreZone *)cloudStoreZone;
-(void)setCloudStoreZone:(PKCloudStoreZone *)arg1 ;
@end
