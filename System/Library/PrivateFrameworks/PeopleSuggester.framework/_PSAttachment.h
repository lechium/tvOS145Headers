/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString, NSUUID, NSURL;

@interface _PSAttachment : NSObject <NSSecureCoding> {

	NSDate* _creationDate;
	NSString* _UTI;
	NSString* _photoLocalIdentifier;
	NSUUID* _identifier;
	NSUUID* _cloudIdentifier;
	NSURL* _contentURL;
	NSString* _contentText;

}

@property (nonatomic,copy,readonly) NSDate * creationDate;                        //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * UTI;                               //@synthesize UTI=_UTI - In the implementation block
@property (nonatomic,copy,readonly) NSString * photoLocalIdentifier;              //@synthesize photoLocalIdentifier=_photoLocalIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * cloudIdentifier;                     //@synthesize cloudIdentifier=_cloudIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSURL * contentURL;                           //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentText;                       //@synthesize contentText=_contentText - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSDate *)creationDate;
-(NSURL *)contentURL;
-(NSUUID *)cloudIdentifier;
-(NSString *)photoLocalIdentifier;
-(NSString *)contentText;
-(NSString *)UTI;
-(id)initWithCreationDate:(id)arg1 UTI:(id)arg2 photoLocalIdentifier:(id)arg3 identifier:(id)arg4 cloudIdentifier:(id)arg5 contentURL:(id)arg6 contentText:(id)arg7 ;
@end
