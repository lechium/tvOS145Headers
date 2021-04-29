/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDuet/CoreDuet-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString, NSUUID, NSNumber, NSURL;

@interface _CDAttachment : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _creationDate;
	NSString* _uti;
	NSUUID* _identifier;
	NSUUID* _cloudIdentifier;
	NSString* _photoLocalIdentifier;
	NSNumber* _size;
	NSURL* _contentURL;
	NSString* _contentText;

}

@property (retain) NSDate * creationDate;                        //@synthesize creationDate=_creationDate - In the implementation block
@property (retain) NSString * uti;                               //@synthesize uti=_uti - In the implementation block
@property (retain) NSUUID * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSUUID * cloudIdentifier;                     //@synthesize cloudIdentifier=_cloudIdentifier - In the implementation block
@property (retain) NSString * photoLocalIdentifier;              //@synthesize photoLocalIdentifier=_photoLocalIdentifier - In the implementation block
@property (retain) NSNumber * size;                              //@synthesize size=_size - In the implementation block
@property (retain) NSURL * contentURL;                           //@synthesize contentURL=_contentURL - In the implementation block
@property (retain) NSString * contentText;                       //@synthesize contentText=_contentText - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)attachmentWithIdentifier:(id)arg1 cloudIdentifier:(id)arg2 type:(id)arg3 sizeInBytes:(id)arg4 creationDate:(id)arg5 ;
+(id)attachmentWithIdentifier:(id)arg1 cloudIdentifier:(id)arg2 type:(id)arg3 sizeInBytes:(id)arg4 creationDate:(id)arg5 contentURL:(id)arg6 contentText:(id)arg7 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSNumber *)size;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSDate *)creationDate;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)setSize:(NSNumber *)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setContentURL:(NSURL *)arg1 ;
-(NSURL *)contentURL;
-(NSString *)uti;
-(NSUUID *)cloudIdentifier;
-(NSString *)photoLocalIdentifier;
-(NSString *)contentText;
-(id)initWithIdentifier:(id)arg1 cloudIdentifier:(id)arg2 type:(id)arg3 sizeInBytes:(id)arg4 creationDate:(id)arg5 contentURL:(id)arg6 contentText:(id)arg7 ;
-(id)initWithIdentifier:(id)arg1 cloudIdentifier:(id)arg2 photoLocalIdentifier:(id)arg3 type:(id)arg4 sizeInBytes:(id)arg5 creationDate:(id)arg6 contentURL:(id)arg7 contentText:(id)arg8 ;
-(void)setCloudIdentifier:(NSUUID *)arg1 ;
-(void)setUti:(NSString *)arg1 ;
-(void)setContentText:(NSString *)arg1 ;
-(void)setPhotoLocalIdentifier:(NSString *)arg1 ;
@end

