/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreDAV/CoreDAVTask.h>

#import "CoreDAVContainerMultiGetSubmittable-Protocol.h"

@class NSError, NSSet, NSString;

@interface CoreDAVContainerMultiGetTask : CoreDAVTask <CoreDAVContainerMultiGetSubmittable>
{
    NSSet *_urls;
    NSString *_appSpecificNamespace;
    NSString *_appSpecificMultiGetNameSpace;
    NSString *_appSpecificMultiGetCommand;
    NSString *_appSpecificDataProp;
    Class _appSpecificDataItemClass;
    BOOL _shouldIgnoreResponseErrors;
    NSSet *_additionalPropElements;
    NSSet *_parsedContents;
    NSSet *_missingURLs;
    NSSet *_deletedURLs;
}

@property(readonly, nonatomic) NSSet *deletedURLs; // @synthesize deletedURLs=_deletedURLs;
@property(readonly, nonatomic) NSSet *missingURLs; // @synthesize missingURLs=_missingURLs;
@property(readonly, nonatomic) NSSet *parsedContents; // @synthesize parsedContents=_parsedContents;
@property(nonatomic) BOOL shouldIgnoreResponseErrors; // @synthesize shouldIgnoreResponseErrors=_shouldIgnoreResponseErrors;
@property(retain) NSSet *additionalPropElements; // @synthesize additionalPropElements=_additionalPropElements;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)requestBody;
- (id)httpMethod;
- (void)dealloc;
- (void)setAdditionalProperties:(id)arg1 onDataItem:(id)arg2;
- (id)copyAdditionalPropElements;
- (id)initWithURLs:(id)arg1 atContainerURL:(id)arg2 appSpecificDataItemClass:(Class)arg3;

// Remaining properties
@property(nonatomic) id <CoreDAVAccountInfoProvider> accountInfoProvider;
@property(copy, nonatomic) id completionBlock;
@property(readonly, nonatomic) NSError *error;
@property(nonatomic) id <CoreDAVTaskManager> taskManager;
@property double timeoutInterval;

@end

