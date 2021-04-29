/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/FATObject.h>

@class NSString, NSNumber, NSData;

@interface EDAMContact : FATObject {

	NSString* _name;
	NSString* _id;
	NSNumber* _type;
	NSString* _photoUrl;
	NSNumber* _photoLastUpdated;
	NSData* _messagingPermit;
	NSNumber* _messagingPermitExpires;

}

@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * id;                                  //@synthesize id=_id - In the implementation block
@property (nonatomic,retain) NSNumber * type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * photoUrl;                            //@synthesize photoUrl=_photoUrl - In the implementation block
@property (nonatomic,retain) NSNumber * photoLastUpdated;                    //@synthesize photoLastUpdated=_photoLastUpdated - In the implementation block
@property (nonatomic,retain) NSData * messagingPermit;                       //@synthesize messagingPermit=_messagingPermit - In the implementation block
@property (nonatomic,retain) NSNumber * messagingPermitExpires;              //@synthesize messagingPermitExpires=_messagingPermitExpires - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)name;
-(void)setType:(NSNumber *)arg1 ;
-(NSNumber *)type;
-(void)setName:(NSString *)arg1 ;
-(NSString *)id;
-(void)setId:(NSString *)arg1 ;
-(NSString *)photoUrl;
-(void)setPhotoUrl:(NSString *)arg1 ;
-(NSNumber *)photoLastUpdated;
-(void)setPhotoLastUpdated:(NSNumber *)arg1 ;
-(NSData *)messagingPermit;
-(void)setMessagingPermit:(NSData *)arg1 ;
-(NSNumber *)messagingPermitExpires;
-(void)setMessagingPermitExpires:(NSNumber *)arg1 ;
@end

