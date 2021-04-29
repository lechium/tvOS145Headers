/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PVTaskTokenPool;

@interface PVTaskToken : NSObject {

	BOOL _returned;
	PVTaskTokenPool* _pool;
	unsigned long long _tokenId;

}

@property (assign,nonatomic) BOOL returned;                                //@synthesize returned=_returned - In the implementation block
@property (nonatomic,__weak,readonly) PVTaskTokenPool * pool;              //@synthesize pool=_pool - In the implementation block
@property (nonatomic,readonly) unsigned long long tokenId;                 //@synthesize tokenId=_tokenId - In the implementation block
-(void)dealloc;
-(PVTaskTokenPool *)pool;
-(void)setReturned:(BOOL)arg1 ;
-(BOOL)returned;
-(void)returnToPool;
-(id)initWithPool:(id)arg1 tokenId:(unsigned long long)arg2 ;
-(unsigned long long)tokenId;
@end

