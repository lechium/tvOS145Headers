/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSURL, NSData, NSString, PLInternalResource;

@interface PLFileSystemBookmark : PLManagedObject {

	NSURL* _fileSystemURL;

}

@property (nonatomic,retain) NSData * bookmarkData; 
@property (nonatomic,retain) NSString * pathRelativeToVolume; 
@property (nonatomic,retain) PLInternalResource * resource; 
+(id)entityName;
+(id)fileSystemBookmarkFromURL:(id)arg1 context:(id)arg2 ;
-(BOOL)supportsCloudUpload;
-(id)payloadID;
-(id)payloadForChangedKeys:(id)arg1 ;
-(id)fileSystemURL;
@end

