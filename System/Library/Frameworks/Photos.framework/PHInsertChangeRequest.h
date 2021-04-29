/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PHInsertChangeRequest <PHUpdateChangeRequest>
@property (readonly) BOOL isNewRequest; 
@property (assign,nonatomic) BOOL shouldPerformConcurrentWork; 
@required
-(BOOL)isNewRequest;
-(BOOL)shouldPerformConcurrentWork;
-(id)initForNewObject;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
-(void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
-(void)finalizeRequestWithBatchSuccess:(BOOL)arg1;
-(void)performConcurrentWork;
-(void)setShouldPerformConcurrentWork:(BOOL)arg1;

@end

