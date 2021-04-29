/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface ENSecureArchiveFileWrapper : NSObject {

	int _fileDescriptor;
	NSString* _path;

}

@property (nonatomic,copy,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
-(void)close;
-(NSString *)path;
-(id)initWithPath:(id)arg1 ;
-(BOOL)openWithError:(id*)arg1 ;
-(BOOL)readObject:(id*)arg1 ofClasses:(id)arg2 error:(id*)arg3 ;
-(BOOL)saveObject:(id)arg1 error:(id*)arg2 ;
-(BOOL)readObject:(id*)arg1 ofClass:(Class)arg2 error:(id*)arg3 ;
-(BOOL)_writeObject:(id)arg1 toFileDescriptor:(int)arg2 error:(id*)arg3 ;
@end
