/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVSExtensionRequestOberver <NSObject>
@required
-(void)tvs_extension:(id)arg1 request:(id)arg2 didCompleteWithItems:(id)arg3;
-(void)tvs_extension:(id)arg1 request:(id)arg2 didCancelWithError:(id)arg3;
-(void)tvs_extension:(id)arg1 requestInterrupted:(id)arg2;

@end
