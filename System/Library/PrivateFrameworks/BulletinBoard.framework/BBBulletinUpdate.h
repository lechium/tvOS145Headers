/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class BBBulletin;

@interface BBBulletinUpdate : NSObject <NSCopying, NSSecureCoding> {

	BBBulletin* _bulletin;
	unsigned long long _feeds;

}

@property (nonatomic,copy,readonly) BBBulletin * bulletin;              //@synthesize bulletin=_bulletin - In the implementation block
@property (nonatomic,readonly) unsigned long long feeds;                //@synthesize feeds=_feeds - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BBBulletin *)bulletin;
-(id)typeDescription;
-(unsigned long long)feeds;
-(id)initWithBulletin:(id)arg1 feeds:(unsigned long long)arg2 ;
@end

