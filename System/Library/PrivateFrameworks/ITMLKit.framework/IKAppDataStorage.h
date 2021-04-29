/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/IKAppDataStoring.h>

@protocol OS_dispatch_queue;
@class NSString, NSMutableDictionary, NSObject;

@interface IKAppDataStorage : NSObject <IKAppDataStoring> {

	unsigned long long _format;
	NSString* _filePath;
	NSString* _identifier;
	NSMutableDictionary* _storageDict;
	NSObject*<OS_dispatch_queue> _storageQueue;

}

@property (nonatomic,retain) NSMutableDictionary * storageDict;                      //@synthesize storageDict=_storageDict - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> storageQueue;              //@synthesize storageQueue=_storageQueue - In the implementation block
@property (nonatomic,retain,readonly) NSString * filePath;                           //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,retain,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)count;
-(id)keyAtIndex:(unsigned long long)arg1 ;
-(NSString *)identifier;
-(id)dictionaryRepresentation;
-(void)clear;
-(unsigned long long)setData:(id)arg1 forKey:(id)arg2 ;
-(NSString *)filePath;
-(void)removeDataForKey:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)storageQueue;
-(NSMutableDictionary *)storageDict;
-(void)_saveDict:(id)arg1 ;
-(id)getDataForKey:(id)arg1 ;
-(id)initWithFilePath:(id)arg1 identifier:(id)arg2 ;
-(void)setStorageDict:(NSMutableDictionary *)arg1 ;
-(void)setStorageQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

