/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopying;
@class NSObject;

@interface TVHKCollectionObjectIdentifier : NSObject <NSCopying> {

	NSObject*<NSCopying> _collectionIdentifier;
	NSObject*<NSCopying> _objectRootIdentifier;
	unsigned long long _collisionCount;

}

@property (nonatomic,copy,readonly) NSObject*<NSCopying> collectionIdentifier;              //@synthesize collectionIdentifier=_collectionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSObject*<NSCopying> objectRootIdentifier;              //@synthesize objectRootIdentifier=_objectRootIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long collisionCount;                           //@synthesize collisionCount=_collisionCount - In the implementation block
+(id)new;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSObject*<NSCopying>)collectionIdentifier;
-(id)initWithCollectionIdentifier:(id)arg1 objectRootIdentifier:(id)arg2 collisionCount:(unsigned long long)arg3 ;
-(unsigned long long)collisionCount;
-(NSObject*<NSCopying>)objectRootIdentifier;
-(id)initWithObjectRootIdentifier:(id)arg1 collisionCount:(unsigned long long)arg2 ;
@end

