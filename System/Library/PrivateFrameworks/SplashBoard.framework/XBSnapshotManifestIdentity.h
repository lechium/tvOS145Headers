/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SplashBoard/SplashBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol XBSnapshotManifestStore;
@class NSString;

@interface XBSnapshotManifestIdentity : NSObject <NSCopying> {

	NSString* _bundleIdentifier;
	id<XBSnapshotManifestStore> _store;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * defaultGroupIdentifier; 
@property (nonatomic,copy,readonly) id<XBSnapshotManifestStore> store;              //@synthesize store=_store - In the implementation block
+(id)identityWithBundleIdentifier:(id)arg1 store:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSString *)bundleIdentifier;
-(id<XBSnapshotManifestStore>)store;
-(NSString *)defaultGroupIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 store:(id)arg2 ;
@end

