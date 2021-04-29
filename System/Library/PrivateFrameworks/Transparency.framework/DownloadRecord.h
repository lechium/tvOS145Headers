/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, NSUUID, NSData, KTRequest;

@interface DownloadRecord : NSManagedObject

@property (nonatomic,copy) NSString * application; 
@property (nonatomic,copy) NSUUID * downloadId; 
@property (assign,nonatomic) long long downloadType; 
@property (nonatomic,retain) NSData * requestData; 
@property (assign,nonatomic) double requestTime; 
@property (nonatomic,retain) NSData * response; 
@property (nonatomic,retain) NSData * revisions; 
@property (nonatomic,copy) NSString * serverHint; 
@property (assign,nonatomic) long long startSLHRevision; 
@property (nonatomic,retain) KTRequest * ktRequest; 
@property (nonatomic,retain) KTRequest * smtRequest; 
+(id)fetchRequest;
-(BOOL)expired;
@end
