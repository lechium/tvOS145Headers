/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreKnowledge/CoreKnowledge-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CKVOriginApp : NSObject <NSCopying, NSSecureCoding> {

	NSString* _universalAppId;

}

@property (nonatomic,readonly) NSString * universalAppId;              //@synthesize universalAppId=_universalAppId - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)Messages;
+(id)Photos;
+(id)Shortcuts;
+(id)Contacts;
+(id)Applications;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToApp:(id)arg1 ;
-(NSString *)universalAppId;
-(BOOL)isKnownApp;
-(id)initWithAppId:(id)arg1 ;
@end

