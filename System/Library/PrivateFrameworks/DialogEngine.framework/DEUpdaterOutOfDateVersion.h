/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData;

@interface DEUpdaterOutOfDateVersion : NSObject {

	unsigned long long _inode;
	NSData* _version;

}

@property (assign,nonatomic) unsigned long long inode;              //@synthesize inode=_inode - In the implementation block
@property (nonatomic,retain) NSData * version;                      //@synthesize version=_version - In the implementation block
-(NSData *)version;
-(void)setVersion:(NSData *)arg1 ;
-(unsigned long long)inode;
-(void)setInode:(unsigned long long)arg1 ;
@end

