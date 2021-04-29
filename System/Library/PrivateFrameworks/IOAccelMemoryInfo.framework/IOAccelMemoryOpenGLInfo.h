/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IOAccelMemoryInfo.framework/IOAccelMemoryInfo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface IOAccelMemoryOpenGLInfo : NSObject {

	int pid;
	NSString* sharegroup;
	unsigned long long objectType;
	int name;
	int blamedProcess;
	NSString* objectDescription;
	NSString* debugLabel;
	id _expansionData;

}

@property (assign) int pid; 
@property (retain) NSString * sharegroup; 
@property (assign) unsigned long long objectType; 
@property (assign) int name; 
@property (assign) int blamedProcess; 
@property (retain) NSString * objectDescription; 
@property (retain) NSString * debugLabel; 
-(int)name;
-(id)description;
-(void)dealloc;
-(void)setName:(int)arg1 ;
-(int)pid;
-(void)setPid:(int)arg1 ;
-(void)setDebugLabel:(NSString *)arg1 ;
-(NSString *)sharegroup;
-(NSString *)debugLabel;
-(unsigned long long)objectType;
-(void)setObjectType:(unsigned long long)arg1 ;
-(NSString *)objectDescription;
-(int)blamedProcess;
-(void)setSharegroup:(NSString *)arg1 ;
-(void)setBlamedProcess:(int)arg1 ;
-(void)setObjectDescription:(NSString *)arg1 ;
@end
