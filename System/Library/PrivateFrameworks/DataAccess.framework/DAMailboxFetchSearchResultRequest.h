/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface DAMailboxFetchSearchResultRequest : NSObject {

	int _bodyFormat;
	int _maxSize;
	NSString* _longID;
	NSString* _folderID;
	NSString* _serverID;

}

@property (nonatomic,copy) NSString * longID;                //@synthesize longID=_longID - In the implementation block
@property (nonatomic,copy) NSString * folderID;              //@synthesize folderID=_folderID - In the implementation block
@property (nonatomic,copy) NSString * serverID;              //@synthesize serverID=_serverID - In the implementation block
@property (assign,nonatomic) int bodyFormat;                 //@synthesize bodyFormat=_bodyFormat - In the implementation block
@property (assign,nonatomic) int maxSize;                    //@synthesize maxSize=_maxSize - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setServerID:(NSString *)arg1 ;
-(NSString *)serverID;
-(int)maxSize;
-(void)setMaxSize:(int)arg1 ;
-(NSString *)folderID;
-(void)setFolderID:(NSString *)arg1 ;
-(int)bodyFormat;
-(void)setBodyFormat:(int)arg1 ;
-(void)setLongID:(NSString *)arg1 ;
-(NSString *)longID;
-(id)initRequestForBodyFormat:(int)arg1 withLongID:(id)arg2 withBodySizeLimit:(int)arg3 ;
-(id)initRequestForBodyFormat:(int)arg1 withFolderID:(id)arg2 withServerID:(id)arg3 withLongID:(id)arg4 withBodySizeLimit:(int)arg5 ;
@end

