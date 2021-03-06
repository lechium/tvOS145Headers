/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ML3DatabaseValidationDelegate;
@class ML3MusicLibrary;

@interface ML3DatabaseValidation : NSObject {

	BOOL _truncateBeforeValidating;
	ML3MusicLibrary* _library;
	id<ML3DatabaseValidationDelegate> _delegate;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) ML3MusicLibrary * library;                                    //@synthesize library=_library - In the implementation block
@property (assign,nonatomic,__weak) id<ML3DatabaseValidationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id completionHandler;                                             //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL truncateBeforeValidating;                                  //@synthesize truncateBeforeValidating=_truncateBeforeValidating - In the implementation block
-(id<ML3DatabaseValidationDelegate>)delegate;
-(void)setDelegate:(id<ML3DatabaseValidationDelegate>)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(ML3MusicLibrary *)library;
-(BOOL)truncateBeforeValidating;
-(BOOL)_truncateDatabaseFileForLibrary:(id)arg1 withError:(id*)arg2 ;
-(BOOL)_validateLibraryDatabaseIfNecessary:(id)arg1 withError:(id*)arg2 ;
-(BOOL)_internalUserAgreesToRebuildUnmigratableDatabase;
-(BOOL)_performDatabasePreprocessingWithLibrary:(id)arg1 error:(id*)arg2 ;
-(BOOL)_performSchemaUpgradeWithLibrary:(id)arg1 error:(id*)arg2 ;
-(id)initWithLibrary:(id)arg1 delegate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)runValidation;
-(void)setTruncateBeforeValidating:(BOOL)arg1 ;
@end

