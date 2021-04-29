/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WFNaming.h>
#import <libobjc.A.dylib/WFSerializableContent.h>

@class NSString, NSDate, NSURL;

@interface WFArticle : NSObject <WFNaming, WFSerializableContent> {

	NSString* _title;
	NSString* _author;
	NSDate* _publishedDate;
	NSString* _body;
	NSString* _excerpt;
	unsigned long long _numberOfWords;
	NSURL* _URL;
	NSURL* _mainImageURL;

}

@property (nonatomic,copy,readonly) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * author;                        //@synthesize author=_author - In the implementation block
@property (nonatomic,copy,readonly) NSDate * publishedDate;                   //@synthesize publishedDate=_publishedDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * body;                          //@synthesize body=_body - In the implementation block
@property (nonatomic,copy,readonly) NSString * excerpt;                       //@synthesize excerpt=_excerpt - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfWords;              //@synthesize numberOfWords=_numberOfWords - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL;                              //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * mainImageURL;                     //@synthesize mainImageURL=_mainImageURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * wfName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
+(id)articleWithTitle:(id)arg1 author:(id)arg2 publishedDate:(id)arg3 body:(id)arg4 excerpt:(id)arg5 numberOfWords:(unsigned long long)arg6 mainImageURL:(id)arg7 URL:(id)arg8 ;
+(id)mainImageURLFromHTML:(id)arg1 ;
+(unsigned long long)numberOfWordsInString:(id)arg1 ;
+(void)fetchArticleFromURL:(id)arg1 pageHTML:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)summaryOfParagraph:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSURL *)URL;
-(NSString *)title;
-(NSString *)body;
-(NSString *)author;
-(unsigned long long)numberOfWords;
-(NSString *)excerpt;
-(NSString *)wfName;
-(id)wfSerializedRepresentation;
-(id)initWithTitle:(id)arg1 author:(id)arg2 publishedDate:(id)arg3 body:(id)arg4 excerpt:(id)arg5 numberOfWords:(unsigned long long)arg6 mainImageURL:(id)arg7 URL:(id)arg8 ;
-(NSDate *)publishedDate;
-(NSURL *)mainImageURL;
@end

