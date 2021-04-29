/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PHPersistentChangeToken;

@interface PHPersistentChangeFetchRequest : NSObject {

	PHPersistentChangeToken* _token;
	unsigned long long _maximumChangeThreshold;

}

@property (nonatomic,copy) PHPersistentChangeToken * token;                          //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) unsigned long long maximumChangeThreshold;              //@synthesize maximumChangeThreshold=_maximumChangeThreshold - In the implementation block
-(PHPersistentChangeToken *)token;
-(void)setToken:(PHPersistentChangeToken *)arg1 ;
-(unsigned long long)maximumChangeThreshold;
-(void)setMaximumChangeThreshold:(unsigned long long)arg1 ;
@end
