/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class PUAbstractAlbumListViewController, PUAlbumListViewControllerSpec, PUFeedViewControllerSpec, PUTimelineViewControllerSpec, PUZoomableGridViewControllerSpec;

@interface PUTabbedLibraryViewControllerSpec : NSObject
{
    PUAlbumListViewControllerSpec *_albumListViewControllerSpec;
    PUAbstractAlbumListViewController *_createAlbumListViewController;
    PUAbstractAlbumListViewController *_createSharedAlbumListViewController;
    PUZoomableGridViewControllerSpec *_zoomableGridViewControllerSpec;
    PUTimelineViewControllerSpec *_timelineViewControllerSpec;
    PUFeedViewControllerSpec *_feedViewControllerSpec;
}

@property(readonly, nonatomic) PUFeedViewControllerSpec *feedViewControllerSpec; // @synthesize feedViewControllerSpec=_feedViewControllerSpec;
@property(readonly, nonatomic) PUTimelineViewControllerSpec *timelineViewControllerSpec; // @synthesize timelineViewControllerSpec=_timelineViewControllerSpec;
@property(readonly, nonatomic) PUZoomableGridViewControllerSpec *zoomableGridViewControllerSpec; // @synthesize zoomableGridViewControllerSpec=_zoomableGridViewControllerSpec;
@property(readonly, nonatomic) PUAbstractAlbumListViewController *createSharedAlbumListViewController; // @synthesize createSharedAlbumListViewController=_createSharedAlbumListViewController;
@property(readonly, nonatomic) PUAbstractAlbumListViewController *createAlbumListViewController; // @synthesize createAlbumListViewController=_createAlbumListViewController;
@property(readonly, nonatomic) PUAlbumListViewControllerSpec *albumListViewControllerSpec; // @synthesize albumListViewControllerSpec=_albumListViewControllerSpec;
- (void).cxx_destruct;

@end

