/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSSecurityScopedURLWrapper, NSError, NSString;

@interface NSItemRepresentationLoadResult : NSObject <NSCopying> {

	BOOL _wasOpenedInPlace;
	NSData* _data;
	NSSecurityScopedURLWrapper* _urlWrapper;
	/*^block*/id _cleanupHandler;
	NSError* _error;
	NSString* _archivedObjectClassName;

}

@property (nonatomic,copy) NSData * data;                                          //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSSecurityScopedURLWrapper * urlWrapper;              //@synthesize urlWrapper=_urlWrapper - In the implementation block
@property (nonatomic,copy) id cleanupHandler;                                      //@synthesize cleanupHandler=_cleanupHandler - In the implementation block
@property (nonatomic,copy) NSError * error;                                        //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSString * archivedObjectClassName;                     //@synthesize archivedObjectClassName=_archivedObjectClassName - In the implementation block
@property (assign,nonatomic) BOOL wasOpenedInPlace;                                //@synthesize wasOpenedInPlace=_wasOpenedInPlace - In the implementation block
+(id)resultWithData:(id)arg1 urlWrapper:(id)arg2 cleanupHandler:(/*^block*/id)arg3 error:(id)arg4 ;
+(id)resultWithError:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSData *)data;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(NSSecurityScopedURLWrapper *)urlWrapper;
-(BOOL)wasOpenedInPlace;
-(void)setArchivedObjectClassName:(NSString *)arg1 ;
-(NSString *)archivedObjectClassName;
-(id)cleanupHandler;
-(void)setUrlWrapper:(NSSecurityScopedURLWrapper *)arg1 ;
-(void)setCleanupHandler:(id)arg1 ;
-(void)setWasOpenedInPlace:(BOOL)arg1 ;
-(id)copyWithData:(id)arg1 urlWrapper:(id)arg2 cleanupHandler:(/*^block*/id)arg3 error:(id)arg4 ;
@end

