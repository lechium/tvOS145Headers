/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitEventRouter.framework/HomeKitEventRouter
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMapTable, NSHashTable;

@interface HMETrieNode : NSObject {

	NSString* _key;
	NSMapTable* _children;
	NSHashTable* _consumers;

}

@property (nonatomic,copy,readonly) NSString * key;                  //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSMapTable * children;                //@synthesize children=_children - In the implementation block
@property (nonatomic,readonly) NSHashTable * consumers;              //@synthesize consumers=_consumers - In the implementation block
-(NSMapTable *)children;
-(NSString *)key;
-(NSHashTable *)consumers;
@end
