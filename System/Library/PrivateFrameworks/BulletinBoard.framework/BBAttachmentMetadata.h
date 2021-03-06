/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString, NSDictionary, NSUUID;

@interface BBAttachmentMetadata : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	long long _type;
	NSURL* _URL;
	NSString* _identifier;
	NSString* _uniformType;
	NSDictionary* _thumbnailGeneratorUserInfo;
	BOOL _thumbnailHidden;
	BOOL _hiddenFromDefaultExpandedView;
	NSUUID* _UUID;

}

@property (nonatomic,copy,readonly) NSUUID * UUID;                                          //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) long long type;                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL;                                            //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniformType;                                 //@synthesize uniformType=_uniformType - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * thumbnailGeneratorUserInfo;              //@synthesize thumbnailGeneratorUserInfo=_thumbnailGeneratorUserInfo - In the implementation block
@property (nonatomic,readonly) BOOL thumbnailHidden;                                        //@synthesize thumbnailHidden=_thumbnailHidden - In the implementation block
@property (nonatomic,readonly) BOOL hiddenFromDefaultExpandedView;                          //@synthesize hiddenFromDefaultExpandedView=_hiddenFromDefaultExpandedView - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(NSString *)identifier;
-(NSURL *)URL;
-(NSUUID *)UUID;
-(NSDictionary *)thumbnailGeneratorUserInfo;
-(BOOL)hasContentModificationsRelativeTo:(id)arg1 ;
-(id)_initWithType:(long long)arg1 URL:(id)arg2 identifier:(id)arg3 uniformType:(id)arg4 thumbnailGeneratorUserInfo:(id)arg5 thumbnailHidden:(BOOL)arg6 hiddenFromDefaultExpandedView:(BOOL)arg7 ;
-(NSString *)uniformType;
-(BOOL)thumbnailHidden;
-(BOOL)hiddenFromDefaultExpandedView;
@end

