/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
@interface TVHKDPAPFace : NSObject {

	unsigned long long _persistentID;
	unsigned long long _nonPersistentID;
	CGRect _fractionalRect;

}

@property (assign,nonatomic) CGRect fractionalRect;                           //@synthesize fractionalRect=_fractionalRect - In the implementation block
@property (assign,nonatomic) unsigned long long persistentID;                 //@synthesize persistentID=_persistentID - In the implementation block
@property (assign,nonatomic) unsigned long long nonPersistentID;              //@synthesize nonPersistentID=_nonPersistentID - In the implementation block
+(id)new;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)_init;
-(unsigned long long)persistentID;
-(void)setPersistentID:(unsigned long long)arg1 ;
-(unsigned long long)nonPersistentID;
-(CGRect)fractionalRect;
-(void)setFractionalRect:(CGRect)arg1 ;
-(void)setNonPersistentID:(unsigned long long)arg1 ;
@end

