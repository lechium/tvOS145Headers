/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface WLKGenre : NSObject {

	NSString* _uniqueID;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * uniqueID;              //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
+(id)genresWithDictionaries:(id)arg1 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)uniqueID;
@end

